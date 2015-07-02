//
//  ViewController.h
//  weiXinPay
//
//  Created by denglong on 15/2/9.
//  Copyright (c) 2015年 denglong. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "WXApiObject.h"
#import "WXApi.h"
#import "payRequsestHandler.h"

@interface ViewController : UIViewController<WXApiDelegate>
{
        enum WXScene _scene;
        //Token
        NSString *Token;
        //Token valid time
        long      token_time;
}

@end

