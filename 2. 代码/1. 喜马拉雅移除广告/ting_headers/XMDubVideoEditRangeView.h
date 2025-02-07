//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"

@class AVAsset, AVAssetImageGenerator, NSMutableArray, NSString, UICollectionView, UIImageView;
@protocol XMDubVideoEditRangeViewDelegate;

@interface XMDubVideoEditRangeView : UIView <UICollectionViewDataSource, UICollectionViewDelegate>
{
    AVAsset *_asset;
    long long _maxLength;
    long long _minLength;
    id <XMDubVideoEditRangeViewDelegate> _delegate;
    UICollectionView *_collectView;
    AVAssetImageGenerator *_imageGenerator;
    double _widthPerSecond;
    long long _thumbImageCount;
    double _lastItemWidth;
    double _overlayWidth;
    double _overlayOffset;
    NSMutableArray *_thumbImageArray;
    UIView *_borderView;
    UIView *_topLine;
    UIView *_bottomLine;
    UIImageView *_leftMark;
    UIImageView *_rightMark;
    struct CGPoint _leftStartPoint;
    struct CGPoint _rightStartPoint;
}

@property(retain, nonatomic) UIImageView *rightMark; // @synthesize rightMark=_rightMark;
@property(retain, nonatomic) UIImageView *leftMark; // @synthesize leftMark=_leftMark;
@property(retain, nonatomic) UIView *bottomLine; // @synthesize bottomLine=_bottomLine;
@property(retain, nonatomic) UIView *topLine; // @synthesize topLine=_topLine;
@property(retain, nonatomic) UIView *borderView; // @synthesize borderView=_borderView;
@property(retain, nonatomic) NSMutableArray *thumbImageArray; // @synthesize thumbImageArray=_thumbImageArray;
@property(nonatomic) double overlayOffset; // @synthesize overlayOffset=_overlayOffset;
@property(nonatomic) double overlayWidth; // @synthesize overlayWidth=_overlayWidth;
@property(nonatomic) struct CGPoint rightStartPoint; // @synthesize rightStartPoint=_rightStartPoint;
@property(nonatomic) struct CGPoint leftStartPoint; // @synthesize leftStartPoint=_leftStartPoint;
@property(nonatomic) double lastItemWidth; // @synthesize lastItemWidth=_lastItemWidth;
@property(nonatomic) long long thumbImageCount; // @synthesize thumbImageCount=_thumbImageCount;
@property(nonatomic) double widthPerSecond; // @synthesize widthPerSecond=_widthPerSecond;
@property(retain, nonatomic) AVAssetImageGenerator *imageGenerator; // @synthesize imageGenerator=_imageGenerator;
@property(retain, nonatomic) UICollectionView *collectView; // @synthesize collectView=_collectView;
@property(nonatomic) __weak id <XMDubVideoEditRangeViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long minLength; // @synthesize minLength=_minLength;
@property(nonatomic) long long maxLength; // @synthesize maxLength=_maxLength;
@property(retain, nonatomic) AVAsset *asset; // @synthesize asset=_asset;
- (void).cxx_destruct;
- (void)scrollViewDidScroll:(id)arg1;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)notifyDelegate;
- (void)moveRightOverlayView:(id)arg1;
- (void)moveLeftOverlayView:(id)arg1;
- (void)getThumbImages;
- (void)resetSubviews;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

