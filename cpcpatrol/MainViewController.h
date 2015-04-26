//
//  MainViewController.h
//  cpcpatrol
//
//  Created by Michael Whang on 2015-04-25.
//  Copyright (c) 2015 Michael Whang. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Parse/Parse.h>
#import <ParseUI/ParseUI.h>
#import <ParseFacebookUtilsV4/PFFacebookUtils.h>
#import <Parse/PF_Twitter.h>

@interface MainViewController : UIViewController <PFLogInViewControllerDelegate, PFSignUpViewControllerDelegate>

@end
