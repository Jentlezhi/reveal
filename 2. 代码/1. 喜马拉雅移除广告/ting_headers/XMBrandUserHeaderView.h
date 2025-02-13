//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "XMBrandUserHeaderContentViewDelegate-Protocol.h"

@class NSString, XMBrandUserHeaderContentView, XMWebImageView;
@protocol XMBrandUserHeaderViewDelegate;

@interface XMBrandUserHeaderView : UIView <XMBrandUserHeaderContentViewDelegate>
{
    _Bool _isRequestPhotoData;
    id <XMBrandUserHeaderViewDelegate> _delegate;
    XMWebImageView *_brandImageview;
    UIView *_bottomBgView;
    UIView *_shadowView;
    XMBrandUserHeaderContentView *_contentView;
}

+ (double)heightWithDataSource:(id)arg1 andDataSource:(id)arg2 anchorInfo:(id)arg3;
@property(retain, nonatomic) XMBrandUserHeaderContentView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) UIView *shadowView; // @synthesize shadowView=_shadowView;
@property(retain, nonatomic) UIView *bottomBgView; // @synthesize bottomBgView=_bottomBgView;
@property(retain, nonatomic) XMWebImageView *brandImageview; // @synthesize brandImageview=_brandImageview;
@property(nonatomic) _Bool isRequestPhotoData; // @synthesize isRequestPhotoData=_isRequestPhotoData;
@property(nonatomic) __weak id <XMBrandUserHeaderViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)userSponsorView:(id)arg1 sponsorTouch:(id)arg2;
- (void)userSponsorView:(id)arg1 sponsorTopTouch:(id)arg2;
- (void)tapLink:(id)arg1 linkUrl:(id)arg2;
- (void)onEditBtn:(id)arg1;
- (void)onLikeLabelTap:(id)arg1;
- (void)onPlusTap:(id)arg1;
- (void)onFouceLabelTap:(id)arg1;
- (void)onHeadBtn:(id)arg1;
- (void)onMailButtonClicked:(id)arg1;
- (void)onFoucusButtonClicked:(id)arg1;
- (void)setAnchorAdInfo:(id)arg1;
- (void)renewFoucesButton:(_Bool)arg1;
- (void)setPersonItem:(id)arg1 andDataSource:(id)arg2;
- (void)setDataSource:(id)arg1;
- (void)customInit;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

