#import "CWrapper.h"
#include "Tester.hpp"

@interface CWrapper()
@property Tester *tester;
@end
@implementation CWrapper
- (instancetype)init
{
    self = [super init];
    self.tester = new Tester();
    return self;
}

- (void)gameLoop
{
    self.tester->gameLoop();
}

- (int)getTime
{
    return self.tester->getTime();
}


@end
