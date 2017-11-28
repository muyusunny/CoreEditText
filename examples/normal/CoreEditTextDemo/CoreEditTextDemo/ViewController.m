//
//  ViewController.m
//  CoreEditTextDemo
//
//  Created by sun on 2017/11/28.
//  Copyright © 2017年 irunthink. All rights reserved.
//

#import "ViewController.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view, typically from a nib.

    NSArray *colorsArray = [NSArray arrayWithObjects:
                            [UIColor redColor],
                            [UIColor blueColor],
                            [UIColor whiteColor],nil];
    CGSize size = CGSizeMake(300, 300);
    UIImageView *myImage = [[UIImageView alloc]initWithFrame:CGRectMake(20, 50, 300, 300)];
    [myImage setImage:SUNBGridImageHorizByLineGapAndColorWithSize(10, [UIColor redColor], size)];
    [self.view addSubview:myImage];

    
    UIImageView *myImage0 = [[UIImageView alloc]initWithFrame:CGRectMake(20, 360, 300, 300)];
    [myImage0 setImage:SUNBRadialGradientImageByColorsWithSize(colorsArray, size)];
    [self.view addSubview:myImage0];

}


- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}


@end
