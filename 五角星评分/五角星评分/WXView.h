//
//  WXView.h
//  五角星评分
//
//  Created by 席亚坤 on 16/6/11.
//  Copyright © 2016年 席亚坤. All rights reserved.
//

#import <UIKit/UIKit.h>


@protocol WXViewDelegate <NSObject>

-(void )Fenshu:(NSString*)xx;

@end








@interface WXView : UIView
@property (nonatomic,assign) id<WXViewDelegate>delegete;
@end
