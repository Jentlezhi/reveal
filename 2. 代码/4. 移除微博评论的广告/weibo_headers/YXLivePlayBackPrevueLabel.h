//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UIImageView, UILabel, YXLivePlayBackPrevueModel;
@protocol YXLivePlayBackPrevueLabelDelegate;

@interface YXLivePlayBackPrevueLabel : UIView
{
    NSString *_iconUrl;
    NSString *_text;
    long long _arrowDirection;
    id <YXLivePlayBackPrevueLabelDelegate> _delegate;
    long long _type;
    YXLivePlayBackPrevueModel *_model;
    UIImageView *_icon;
    UILabel *_label;
    UIImageView *_arrow;
    double _width;
}

@property(nonatomic) double width; // @synthesize width=_width;
@property(retain, nonatomic) UIImageView *arrow; // @synthesize arrow=_arrow;
@property(retain, nonatomic) UILabel *label; // @synthesize label=_label;
@property(retain, nonatomic) UIImageView *icon; // @synthesize icon=_icon;
@property(retain, nonatomic) YXLivePlayBackPrevueModel *model; // @synthesize model=_model;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(nonatomic) __weak id <YXLivePlayBackPrevueLabelDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long arrowDirection; // @synthesize arrowDirection=_arrowDirection;
@property(retain, nonatomic) NSString *text; // @synthesize text=_text;
@property(retain, nonatomic) NSString *iconUrl; // @synthesize iconUrl=_iconUrl;
- (void).cxx_destruct;
- (void)tapped:(id)arg1;
- (void)setArrowHidden:(_Bool)arg1;
- (void)layoutSubviews;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithType:(long long)arg1;

@end

