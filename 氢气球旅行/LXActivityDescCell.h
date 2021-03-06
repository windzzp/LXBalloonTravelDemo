//
//  LXActivityDescCell.h
//  氢气球旅行
//
//  Created by 曾令轩 on 16/1/11.
//  Copyright © 2016年 曾令轩. All rights reserved.
//

#import <UIKit/UIKit.h>

@class LXTravelActivity;

@interface LXActivityDescCell : UITableViewCell
@property (nonatomic, strong) LXTravelActivity *activity;

+ (instancetype)cellWithTableView:(UITableView *)tableView;
- (instancetype)initWithTableView:(UITableView *)tableView;
@end
