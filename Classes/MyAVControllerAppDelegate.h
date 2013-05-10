#import <UIKit/UIKit.h>

@class WelcomeViewController;

@interface MyAVControllerAppDelegate : NSObject <UIApplicationDelegate> {
    UIWindow *window;
    WelcomeViewController *viewController;
}

@property (nonatomic, strong) IBOutlet UIWindow *window;
@property (nonatomic, strong) IBOutlet WelcomeViewController *viewController;

@end

