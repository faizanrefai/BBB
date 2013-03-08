//
//  DetailViewController.h
//  BBB
//
//  Created by iMac on 08/03/13.
//  Copyright (c) 2013 iMac. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
