//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBAdSuspensionBaseView.h"

#import "WBAdChildWebViewControllerDelegate-Protocol.h"

@class CALayer, CATextLayer, NSString, WBAdSuspensionCardlistViewController;

@interface WBAdSuspensionCardlistView : WBAdSuspensionBaseView <WBAdChildWebViewControllerDelegate>
{
    WBAdSuspensionCardlistViewController *_controller;
    CATextLayer *_titleLayer;
    CALayer *_bottomMaskLayer;
}

@property(retain, nonatomic) CALayer *bottomMaskLayer; // @synthesize bottomMaskLayer=_bottomMaskLayer;
@property(retain, nonatomic) CATextLayer *titleLayer; // @synthesize titleLayer=_titleLayer;
@property(retain, nonatomic) WBAdSuspensionCardlistViewController *controller; // @synthesize controller=_controller;
- (void).cxx_destruct;
- (void)adSuspensionCardlistControllerViewWillAppear:(id)arg1;
- (void)adSuspensionCardlistControllerViewDidAppear:(id)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)refreshUIWithDisplayStyle:(unsigned long long)arg1 Animation:(_Bool)arg2;
- (void)loadUIElementsByDic:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

