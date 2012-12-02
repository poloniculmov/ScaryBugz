//
//  DetailViewController.h
//  ScaryBugz
//
//  Created by Alexandru Nicolae on 12/2/12.
//  Copyright (c) 2012 Alexandru Nicolae. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
