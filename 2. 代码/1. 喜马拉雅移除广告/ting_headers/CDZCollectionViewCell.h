//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class CDZButton, NSIndexPath, UIImage, UILabel, UIView;
@protocol CDZCollectionViewCellDelegate;

@interface CDZCollectionViewCell : UICollectionViewCell
{
    CDZButton *_tipButton;
    _Bool _hasInitialized;
    _Bool _autoHighlightUnderlayView;
    _Bool _autoHighlightUnderlayViewWhenSelected;
    _Bool _titleForceSizeToFit;
    _Bool _autoHighlightTipButton;
    _Bool _autoSelectTipButton;
    id <CDZCollectionViewCellDelegate> _delegate;
    id _userInfo;
    NSIndexPath *_indexPath;
    UIView *_underlayView;
    CDZButton *_imageView;
    UIView *_imageHighlightedMaskView;
    UILabel *_titleLabel;
    long long _titleLabelPosition;
    UIView *_tipView;
    long long _tipViewPosition;
    struct UIEdgeInsets _underlayInsets;
    struct UIEdgeInsets _titleInsets;
    struct UIEdgeInsets _tipViewEdgeInsets;
}

@property(nonatomic) _Bool autoSelectTipButton; // @synthesize autoSelectTipButton=_autoSelectTipButton;
@property(nonatomic) _Bool autoHighlightTipButton; // @synthesize autoHighlightTipButton=_autoHighlightTipButton;
@property(nonatomic) struct UIEdgeInsets tipViewEdgeInsets; // @synthesize tipViewEdgeInsets=_tipViewEdgeInsets;
@property(nonatomic) long long tipViewPosition; // @synthesize tipViewPosition=_tipViewPosition;
@property(retain, nonatomic) UIView *tipView; // @synthesize tipView=_tipView;
@property(nonatomic) long long titleLabelPosition; // @synthesize titleLabelPosition=_titleLabelPosition;
@property(nonatomic) _Bool titleForceSizeToFit; // @synthesize titleForceSizeToFit=_titleForceSizeToFit;
@property(nonatomic) struct UIEdgeInsets titleInsets; // @synthesize titleInsets=_titleInsets;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIView *imageHighlightedMaskView; // @synthesize imageHighlightedMaskView=_imageHighlightedMaskView;
@property(retain, nonatomic) CDZButton *imageView; // @synthesize imageView=_imageView;
@property(nonatomic) _Bool autoHighlightUnderlayViewWhenSelected; // @synthesize autoHighlightUnderlayViewWhenSelected=_autoHighlightUnderlayViewWhenSelected;
@property(nonatomic) _Bool autoHighlightUnderlayView; // @synthesize autoHighlightUnderlayView=_autoHighlightUnderlayView;
@property(nonatomic) struct UIEdgeInsets underlayInsets; // @synthesize underlayInsets=_underlayInsets;
@property(retain, nonatomic) UIView *underlayView; // @synthesize underlayView=_underlayView;
@property(retain, nonatomic) NSIndexPath *indexPath; // @synthesize indexPath=_indexPath;
@property(nonatomic) _Bool hasInitialized; // @synthesize hasInitialized=_hasInitialized;
@property(retain, nonatomic) id userInfo; // @synthesize userInfo=_userInfo;
@property(nonatomic) __weak id <CDZCollectionViewCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
@property(nonatomic) _Bool autoHighlightBgViewWhenSelected;
@property(nonatomic) _Bool autoHighlightBgView;
@property(nonatomic) struct UIEdgeInsets bgViewInsets;
@property(retain, nonatomic) UIView *bgView;
- (id)myTipView;
@property(readonly, nonatomic) CDZButton *tipButton;
@property(readonly, nonatomic, getter=imageHighlightedMaskView) UIView *imageViewHighlightedMaskView;
@property(retain, nonatomic) UIImage *image;
@property(nonatomic) struct UIEdgeInsets imageInsets;
@property(nonatomic) _Bool autoHighlightImageViewWhenSelected;
@property(nonatomic) _Bool autoHighlightImageView;
- (void)setSelected:(_Bool)arg1;
- (void)setHighlighted:(_Bool)arg1;
- (void)layoutSubviews;
- (void)clickTipButton:(id)arg1;
- (void)didInitialize;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

