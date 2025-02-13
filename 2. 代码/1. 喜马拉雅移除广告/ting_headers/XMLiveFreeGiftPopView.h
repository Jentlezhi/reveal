//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIControl.h>

@class UIButton, UIImageView, UILabel, XMLiveRoomApproachInfo, XMPopView, XMWebImageView;

@interface XMLiveFreeGiftPopView : UIControl
{
    CDUnknownBlockType _tapBlock;
    XMLiveRoomApproachInfo *_liveItem;
    XMWebImageView *_backImageView;
    UIButton *_closeBtn;
    UILabel *_titleLabel;
    UILabel *_descLabel;
    UIImageView *_iconImageView;
    XMPopView *_popView;
    struct CGRect _giftBtnRect;
}

- (void).cxx_destruct;
@property(nonatomic) struct CGRect giftBtnRect; // @synthesize giftBtnRect=_giftBtnRect;
@property(retain, nonatomic) XMPopView *popView; // @synthesize popView=_popView;
@property(retain, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(retain, nonatomic) UILabel *descLabel; // @synthesize descLabel=_descLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIButton *closeBtn; // @synthesize closeBtn=_closeBtn;
@property(retain, nonatomic) XMWebImageView *backImageView; // @synthesize backImageView=_backImageView;
@property(retain, nonatomic) XMLiveRoomApproachInfo *liveItem; // @synthesize liveItem=_liveItem;
@property(copy, nonatomic) CDUnknownBlockType tapBlock; // @synthesize tapBlock=_tapBlock;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)tapContentView;
- (void)hideTap;
- (void)hide;
- (void)showAtView:(id)arg1 giftBtnRect:(struct CGRect)arg2 andInfo:(id)arg3;
- (void)customedSubView;
- (id)initWithFrame:(struct CGRect)arg1;

@end

