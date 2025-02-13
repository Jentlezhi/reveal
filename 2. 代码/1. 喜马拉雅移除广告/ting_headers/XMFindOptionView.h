//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

@class NSString, UILabel, XMBadgeView, XMFindDiscoverColumnItem, XMWebImageView;

@interface XMFindOptionView : UIButton
{
    XMWebImageView *_coverImageView;
    _Bool _isAverageLayout;
    UILabel *_nameLable;
    UIButton *_bubbleTextbtn;
    XMBadgeView *_badgeView;
    XMFindDiscoverColumnItem *_optItem;
    NSString *_bubbleSmall;
    NSString *_bubbleMid;
    NSString *_bubleLarge;
    NSString *_sourceVCTitle;
    long long _badgeNumber;
}

@property(nonatomic) long long badgeNumber; // @synthesize badgeNumber=_badgeNumber;
@property(copy, nonatomic) NSString *sourceVCTitle; // @synthesize sourceVCTitle=_sourceVCTitle;
@property(retain, nonatomic) NSString *bubleLarge; // @synthesize bubleLarge=_bubleLarge;
@property(retain, nonatomic) NSString *bubbleMid; // @synthesize bubbleMid=_bubbleMid;
@property(retain, nonatomic) NSString *bubbleSmall; // @synthesize bubbleSmall=_bubbleSmall;
@property(retain, nonatomic) XMFindDiscoverColumnItem *optItem; // @synthesize optItem=_optItem;
@property(retain, nonatomic) XMBadgeView *badgeView; // @synthesize badgeView=_badgeView;
@property(retain, nonatomic) UIButton *bubbleTextbtn; // @synthesize bubbleTextbtn=_bubbleTextbtn;
@property(retain, nonatomic) UILabel *nameLable; // @synthesize nameLable=_nameLable;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)arg1;
- (struct CGSize)optionImageSizeForAverage;
- (struct CGSize)optionImageSize;
- (void)updateSubviewsAverage;
- (void)layoutSubviews;
- (void)updateBubbleTextBtn;
- (void)customInit;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

@end

