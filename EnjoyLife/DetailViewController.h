//
//  DetailViewController.h
//  EnjoyLife
//
//  Created by snailspeed on 16/5/8.
//  Copyright © 2016年 EnjoyLife.com. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

