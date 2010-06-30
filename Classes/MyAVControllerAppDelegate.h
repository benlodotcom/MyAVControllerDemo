#import <UIKit/UIKit.h>

@class WelcomeViewController;

@interface MyAVControllerAppDelegate : NSObject <UIApplicationDelegate> {
    UIWindow *window;
    WelcomeViewController *viewController;
}

@property (nonatomic, retain) IBOutlet UIWindow *window;
@property (nonatomic, retain) IBOutlet WelcomeViewController *viewController;

@end

