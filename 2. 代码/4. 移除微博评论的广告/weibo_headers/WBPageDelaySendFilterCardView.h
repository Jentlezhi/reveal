//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBPageCardViewBase.h"

@class NSArray, UIButton, UILabel, WBContentImageView;

@interface WBPageDelaySendFilterCardView : WBPageCardViewBase
{
    UIButton *_filterButton;
    NSArray *_filterGroups;
    UILabel *_titleLabel;
    WBContentImageView *_icon;
    UILabel *_iconLabel;
}

+ (_Bool)allowCustomBubbleLayout;
+ (_Bool)allowBubble;
+ (struct UIEdgeInsets)edgeInsetsViewOutside:(id)arg1;
+ (struct UIEdgeInsets)edgeInsetsBubbleOutside;
+ (double)heightOfDataObject:(id)arg1;
@property(retain, nonatomic) UILabel *iconLabel; // @synthesize iconLabel=_iconLabel;
@property(retain, nonatomic) WBContentImageView *icon; // @synthesize icon=_icon;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(copy, nonatomic) NSArray *filterGroups; // @synthesize filterGroups=_filterGroups;
@property(retain, nonatomic) UIButton *filterButton; // @synthesize filterButton=_filterButton;
- (void).cxx_destruct;
- (void)filterButtonClicked;
- (void)setPageCard:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

@end

