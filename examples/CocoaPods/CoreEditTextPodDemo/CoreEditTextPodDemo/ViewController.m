//
//  ViewController.m
//  CoreEditTextPodDemo
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
    
    /*
    此为demo演示，所显示的页面并非静态库的全部功能，主要目的是介绍工具类的使用方法和宏定义的使用方法，工具类中的其他方法都可以参照该方法调用和使用，工具类中的每个方法都标注了注释，如果在使用过程中遇到问题，可以添加QQ群讨论，或者打开页面介绍中的网站进行反馈，如果感觉工具类的使用对自己有帮助，还请在Git上为我加星，您的鼓励是我改进并长期维护的最大的支持。
    使用中，还请打开工具类的头文件，多看一下，多对比下demo使用。
    开发交流/问题反馈 QQ群：221762069 
    申请添加群时，请备注：iOS工具类讨论
    iOS开发讨论发言：https://www.irunthink.com/forum-92-1.html    
    */
    
    
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
