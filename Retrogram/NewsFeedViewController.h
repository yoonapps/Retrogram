//
//  FirstViewController.h
//  Retrogram
//
//  Created by Kyle Yoon on 10/27/14.
//  Copyright (c) 2014 yoonapps. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Parse/Parse.h>
#import "RGUser.h"

@interface NewsFeedViewController : UIViewController

- (void)queryMyPhotosAndFollowedUsersPhotos;

@end

