import SwiftUI

struct ContentView: View {
    let cppItem = CWrapper()
    var body: some View {
        Button("Button") {
            print(cppItem.getTime())
        }
    }
}

struct ContentView_Previews: PreviewProvider {
    static var previews: some View {
        ContentView()
    }
}
