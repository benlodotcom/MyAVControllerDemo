#import "WelcomeViewController.h"
#import "MyAVController.h"

@implementation WelcomeViewController

- (IBAction)start {
	[self presentModalViewController:[[MyAVController alloc] init] animated:YES];
}


@end
