//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XMASynUIDataViewModel.h"

#import "XMThirdPartAdViewUtilRootProtocol-Protocol.h"

@class NSString, XMLaunchAdItem, XMThirdPartAdViewUtil;

@interface XMAdBaseView : XMASynUIDataViewModel <XMThirdPartAdViewUtilRootProtocol>
{
    CDUnknownBlockType _clickAction;
    CDUnknownBlockType _dissmisAction;
    CDUnknownBlockType _didShowAction;
    XMLaunchAdItem *_adItem;
    XMThirdPartAdViewUtil *_thirdPartAdUtil;
}

@property(readonly, nonatomic) XMThirdPartAdViewUtil *thirdPartAdUtil; // @synthesize thirdPartAdUtil=_thirdPartAdUtil;
@property(retain, nonatomic) XMLaunchAdItem *adItem; // @synthesize adItem=_adItem;
@property(copy, nonatomic) CDUnknownBlockType didShowAction; // @synthesize didShowAction=_didShowAction;
@property(copy, nonatomic) CDUnknownBlockType dissmisAction; // @synthesize dissmisAction=_dissmisAction;
@property(copy, nonatomic) CDUnknownBlockType clickAction; // @synthesize clickAction=_clickAction;
- (void).cxx_destruct;
- (void)adViewShouldHideAction;
- (void)adViewDidClickAction;
- (void)showWithDissmisAction:(CDUnknownBlockType)arg1 withClickAction:(CDUnknownBlockType)arg2 withAdData:(id)arg3;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

