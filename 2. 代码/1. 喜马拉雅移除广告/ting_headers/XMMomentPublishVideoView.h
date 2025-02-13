//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "XMMPublishContentDelegate-Protocol.h"

@class NSString, UIButton, UIImageView, XMMVideoNode;

@interface XMMomentPublishVideoView : UIView <XMMPublishContentDelegate>
{
    UIView *_backView;
    UIImageView *_coverImage;
    UIButton *_closeBtn;
    UIButton *_playBtn;
    XMMVideoNode *_model;
    CDUnknownBlockType _clickAction;
    CDUnknownBlockType _closeAction;
}

@property(copy, nonatomic) CDUnknownBlockType closeAction; // @synthesize closeAction=_closeAction;
@property(copy, nonatomic) CDUnknownBlockType clickAction; // @synthesize clickAction=_clickAction;
@property(retain, nonatomic) XMMVideoNode *model; // @synthesize model=_model;
- (void).cxx_destruct;
- (unsigned long long)selectedType;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)onTap:(id)arg1;
- (void)_setupUnit;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

