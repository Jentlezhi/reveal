//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImageView, UILabel;

@interface XMDubShowProgreamTopicView : UIView
{
    UIImageView *_iconImageView;
    UILabel *_topicLabel;
    UIImageView *_dicImageView;
}

@property(retain, nonatomic) UIImageView *dicImageView; // @synthesize dicImageView=_dicImageView;
@property(retain, nonatomic) UILabel *topicLabel; // @synthesize topicLabel=_topicLabel;
@property(retain, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
- (void).cxx_destruct;
- (void)customInit;
- (void)setTopicName:(id)arg1 pkTopicId:(unsigned long long)arg2 themeTopicId:(unsigned long long)arg3;
- (id)initWithFrame:(struct CGRect)arg1;

@end

