//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XMBaseAlert.h"

@class XMCheckInAward;

@interface XMCheckinAwardsAlert : XMBaseAlert
{
    XMCheckInAward *_award;
    XMCheckInAward *_lastAward;
    CDUnknownBlockType _btnDidClick;
}

+ (id)getConfig;
+ (id)configForCurrentTypeWithAward:(id)arg1;
+ (id)getAwardLocationDescWithAward:(id)arg1;
+ (id)showAlertWithLastAward:(id)arg1;
+ (id)showAlertWithAwd:(id)arg1;
+ (id)alertView:(id)arg1 addLabelWithName:(id)arg2 andText:(id)arg3 andMaxWidth:(double)arg4;
+ (id)alertView:(id)arg1 addButtonWithTitle:(id)arg2 andAction:(SEL)arg3;
@property(copy, nonatomic) CDUnknownBlockType btnDidClick; // @synthesize btnDidClick=_btnDidClick;
@property(retain, nonatomic) XMCheckInAward *lastAward; // @synthesize lastAward=_lastAward;
@property(retain, nonatomic) XMCheckInAward *award; // @synthesize award=_award;
- (void).cxx_destruct;
- (void)showView;
- (id)configForCurrentType;
- (id)getAwardLocationDesc;
- (id)getAlbumListenDuration;
- (id)getXiDianUsage;
- (id)getSubtitle;
- (id)getTitle;
- (void)buttonClick:(id)arg1;
- (void)closeClick:(id)arg1;
- (id)addLabelWithName:(id)arg1 andText:(id)arg2 andMaxWidth:(double)arg3;
- (id)addButtonWithTitle:(id)arg1;
- (id)addGoodsView:(id)arg1;
- (id)addAlbumUnderSubtitle:(id)arg1;
- (id)addXidianRedEnvelopeUnderSubtitle:(id)arg1;
- (id)addXidianImageViewUnderSubtitle:(id)arg1;
- (id)addIntroView:(id)arg1 andAward:(id)arg2;
- (void)showMyCheckInInfo;
- (id)addFinishCheckInViewWithAward:(id)arg1;
- (void)updateUI;
- (void)initUI;

@end

