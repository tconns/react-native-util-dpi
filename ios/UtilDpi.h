
#ifdef RCT_NEW_ARCH_ENABLED
#import "RNUtilDpiSpec.h"

@interface UtilDpi : NSObject <NativeUtilDpiSpec>
#else
#import <React/RCTBridgeModule.h>

@interface UtilDpi : NSObject <RCTBridgeModule>
#endif

@end
