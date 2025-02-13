//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

@class UIImageView, UILabel, UIView, XMBadgeView, XMHearOptionItem;

@interface XMHearOptionView : UIButton
{
    UIView *_redView;
    XMBadgeView *_badgeView;
    UIImageView *_optionIV;
    UILabel *_optionLB;
    UILabel *_detailLB;
    XMHearOptionItem *_item;
}

@property(retain, nonatomic) XMHearOptionItem *item; // @synthesize item=_item;
@property(retain, nonatomic) UILabel *detailLB; // @synthesize detailLB=_detailLB;
@property(retain, nonatomic) UILabel *optionLB; // @synthesize optionLB=_optionLB;
@property(retain, nonatomic) UIImageView *optionIV; // @synthesize optionIV=_optionIV;
@property(retain, nonatomic) XMBadgeView *badgeView; // @synthesize badgeView=_badgeView;
@property(retain, nonatomic) UIView *redView; // @synthesize redView=_redView;
- (void).cxx_destruct;
- (void)updateBadgeValue:(id)arg1;
- (void)isHideRedView:(_Bool)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

@end

