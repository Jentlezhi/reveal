//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton, UIImageView, UILabel;
@protocol XMGroupOfflineViewDelegate;

@interface XMGroupOfflineView : UIView
{
    id <XMGroupOfflineViewDelegate> _delegate;
    UIImageView *_offlineImgView;
    UILabel *_offlineLabel;
    UIButton *_retryBtn;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIButton *retryBtn; // @synthesize retryBtn=_retryBtn;
@property(retain, nonatomic) UILabel *offlineLabel; // @synthesize offlineLabel=_offlineLabel;
@property(retain, nonatomic) UIImageView *offlineImgView; // @synthesize offlineImgView=_offlineImgView;
@property(nonatomic) __weak id <XMGroupOfflineViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onRetryClicked;
- (void)layoutSubviews;
- (void)showError:(id)arg1;
- (void)customedSubViews;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

@end

