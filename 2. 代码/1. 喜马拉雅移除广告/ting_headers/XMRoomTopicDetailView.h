//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "XMLiveInfoTopViewDelegate-Protocol.h"

@class NSString, UIImageView, UIScrollView, XMLiveInfoTopView, XMLiveRoomApproachInfo, XMTimer;
@protocol XMRoomTopicDetailViewDelegate;

@interface XMRoomTopicDetailView : UIView <XMLiveInfoTopViewDelegate>
{
    XMLiveRoomApproachInfo *_approachInfo;
    id <XMRoomTopicDetailViewDelegate> _delegate;
    UIImageView *_tagView;
    UIScrollView *_contentView;
    XMLiveInfoTopView *_infoView;
    XMTimer *_countDownTimer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) XMTimer *countDownTimer; // @synthesize countDownTimer=_countDownTimer;
@property(retain, nonatomic) XMLiveInfoTopView *infoView; // @synthesize infoView=_infoView;
@property(retain, nonatomic) UIScrollView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) UIImageView *tagView; // @synthesize tagView=_tagView;
@property(nonatomic) __weak id <XMRoomTopicDetailViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) XMLiveRoomApproachInfo *approachInfo; // @synthesize approachInfo=_approachInfo;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)onLiveInfoTopViewDidClickedReserve:(id)arg1;
- (void)hide;
- (void)showFromPoint:(struct CGPoint)arg1;
- (void)layoutSubviews;
- (void)countDownTimerCallback;
- (void)createSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

