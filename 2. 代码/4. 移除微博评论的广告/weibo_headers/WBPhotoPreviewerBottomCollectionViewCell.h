//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class CAGradientLayer, UIImageView, UIView, WBImageEditorCache;

@interface WBPhotoPreviewerBottomCollectionViewCell : UICollectionViewCell
{
    CAGradientLayer *_selectBack;
    _Bool _isMoving;
    WBImageEditorCache *_imageCache;
    UIImageView *_preImageView;
    UIView *_enableCoverView;
}

@property(retain, nonatomic) UIView *enableCoverView; // @synthesize enableCoverView=_enableCoverView;
@property(retain, nonatomic) UIImageView *preImageView; // @synthesize preImageView=_preImageView;
@property(nonatomic) _Bool isMoving; // @synthesize isMoving=_isMoving;
@property(retain, nonatomic) WBImageEditorCache *imageCache; // @synthesize imageCache=_imageCache;
- (void).cxx_destruct;
- (void)setCellEnable:(_Bool)arg1;
- (void)updateCellSelectStatus:(_Bool)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

