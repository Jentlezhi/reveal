//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class UILabel, UIView, XMUserWeKeModel, XMWebImageView;

@interface XMUserWeKeSubCell : UITableViewCell
{
    XMWebImageView *_coverImageView;
    UIView *_bgView;
    UIView *_bgVieww;
    UILabel *_titleTYLab;
    UIView *_liveView;
    UILabel *_liveLB;
    UIView *_line;
    UILabel *_subTitle;
    UILabel *_listenCount;
    UIView *_linee;
    UILabel *_courseCount;
    UIView *_bottomLine;
    XMUserWeKeModel *_model;
}

@property(retain, nonatomic) XMUserWeKeModel *model; // @synthesize model=_model;
- (void).cxx_destruct;
- (void)setDataSource:(id)arg1;
- (void)p_setUI;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

