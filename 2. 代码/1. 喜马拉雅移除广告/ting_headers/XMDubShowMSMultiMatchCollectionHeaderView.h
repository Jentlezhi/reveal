//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionReusableView.h>

@class CAGradientLayer, UIButton;

@interface XMDubShowMSMultiMatchCollectionHeaderView : UICollectionReusableView
{
    CDUnknownBlockType _clickAction;
    UIButton *_nButton;
    CAGradientLayer *_nButtonGL;
    UIButton *_hotButton;
    CAGradientLayer *_hotButtonGL;
    long long _maleOrFemale;
}

@property(nonatomic) long long maleOrFemale; // @synthesize maleOrFemale=_maleOrFemale;
@property(retain, nonatomic) CAGradientLayer *hotButtonGL; // @synthesize hotButtonGL=_hotButtonGL;
@property(retain, nonatomic) UIButton *hotButton; // @synthesize hotButton=_hotButton;
@property(retain, nonatomic) CAGradientLayer *nButtonGL; // @synthesize nButtonGL=_nButtonGL;
@property(retain, nonatomic) UIButton *nButton; // @synthesize nButton=_nButton;
@property(copy, nonatomic) CDUnknownBlockType clickAction; // @synthesize clickAction=_clickAction;
- (void).cxx_destruct;
- (void)updateAllButtons;
- (void)toActionFemale;
- (void)toActionMale;
- (void)customInit;
- (id)initWithFrame:(struct CGRect)arg1;

@end

