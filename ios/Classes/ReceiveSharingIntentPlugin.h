// This file is intentionally minimal for Xcode 15+ compatibility
// The plugin is now implemented purely in Swift
#import <Foundation/Foundation.h>

@interface ReceiveSharingIntentPlugin : NSObject
+ (void)registerWithRegistrar:(id)registrar;
@end
