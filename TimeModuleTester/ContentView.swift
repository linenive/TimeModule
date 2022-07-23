import SwiftUI


protocol CppDelegate {
    func startGameLoop()
    func printTime()
}

struct ContentView: View, CppDelegate {
    let cppItem = CWrapper()
    
    func startGameLoop() {
        DispatchQueue.global(qos: .background).async {
            cppItem.gameLoop()
        }
    }
    
    func printTime() {
        print(cppItem.getTime())
    }

    var body: some View {
        NavigationView {
            ControlPad(delegate: self)
            Clock()
        }
        .frame(minWidth: 500, idealWidth: 700, maxWidth: 900, minHeight: 300, idealHeight: 400, maxHeight: 1000)
    }
}

struct Clock: View {
    var body: some View {
        Text("2014년 3월 1일 10:00")
    }
}

struct ControlPad: View {
    var delegate: CppDelegate
    var body: some View {
        Button("Start") {
            delegate.startGameLoop()
        }
        Button("Button") {
            delegate.printTime()
        }
    }
}

struct ContentView_Previews: PreviewProvider {
    static var previews: some View {
        ContentView()
    }
}
