//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "RecyclableScrollViewCell.h"

@class NSString, UIButton, UILabel, WBArticlePragraphModel;

@interface ArticleShareBottomButtonCell : RecyclableScrollViewCell
{
    UIButton *_upgradeButton;
    UILabel *_tipsLabel;
    NSString *_scheme;
    WBArticlePragraphModel *_pragraphModel;
}

+ (void)renderDrawingContext:(id)arg1 withContentWidth:(unsigned long long)arg2;
- (id)pragraphModel;
- (void).cxx_destruct;
- (void)setPragraphModel:(id)arg1;
- (void)_updateViewWithTitle:(id)arg1 tipsTitle:(id)arg2;
- (void)_didClickUpgradeButton;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

