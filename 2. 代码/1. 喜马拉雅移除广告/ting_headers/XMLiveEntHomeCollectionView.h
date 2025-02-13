//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "CAAnimationDelegate-Protocol.h"

@class CAGradientLayer, CALayer, NSString, UIImageView, UILabel, XMLiveRoomEntApproachInfo, XMWebImageView, YYLabel;
@protocol XMLiveEntHomeCollectionViewDelegate;

@interface XMLiveEntHomeCollectionView : UIView <CAAnimationDelegate>
{
    XMWebImageView *_coverImgView;
    UILabel *_honourLabel;
    CAGradientLayer *_honourGradientLayer;
    CALayer *_blinkImageLayer;
    long long _animationTime;
    CAGradientLayer *_socialGradientLayer;
    UILabel *_socialLabel;
    UIImageView *_showRedpacketView;
    UIImageView *_shadowImgView;
    UILabel *_titleLabel;
    UILabel *_detailLabel;
    YYLabel *_tagLabel;
    UIImageView *_tagBgImageView;
    UIImageView *_animateImage;
    YYLabel *_statusLabel;
    _Bool _useDarkSkin;
    id <XMLiveEntHomeCollectionViewDelegate> _delegate;
    XMLiveRoomEntApproachInfo *_item;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool useDarkSkin; // @synthesize useDarkSkin=_useDarkSkin;
@property(retain, nonatomic) XMLiveRoomEntApproachInfo *item; // @synthesize item=_item;
@property(nonatomic) __weak id <XMLiveEntHomeCollectionViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)animationDidStart:(id)arg1;
- (void)positionBlinkAnimation;
- (void)onCoverTapGesture:(id)arg1;
- (void)onAvatarTapGesture;
- (void)showLiveEntertain:(id)arg1;
- (void)layoutSubviews;
- (void)addLayoutConstrant;
- (void)customedSubViews;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

