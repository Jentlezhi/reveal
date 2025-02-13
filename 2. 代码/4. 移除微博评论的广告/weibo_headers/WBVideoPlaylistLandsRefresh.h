//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, NSString, UIActivityIndicatorView, UICollectionView, UIImageView, UILabel, WBShimmeringView;

@interface WBVideoPlaylistLandsRefresh : UIView
{
    _Bool _collectionViewPageEnabel;
    _Bool _hideMessage;
    _Bool _hideIndicator;
    _Bool _showShimmering;
    UICollectionView *_collectionView;
    unsigned long long _refreshStatus;
    unsigned long long _oldRefreshStatus;
    NSString *_normalMessage;
    NSString *_pullingMessage;
    NSString *_loadingMessage;
    NSArray *_loadingImages;
    UILabel *_messageLabel;
    UIImageView *_loadingImageView;
    UIActivityIndicatorView *_defaultIndicator;
    CDUnknownBlockType _loadActionBlock;
    WBShimmeringView *_shimmeringView;
    struct UIEdgeInsets _originalContentInset;
}

+ (id)refreshWithLoadAction:(CDUnknownBlockType)arg1;
@property(retain, nonatomic) WBShimmeringView *shimmeringView; // @synthesize shimmeringView=_shimmeringView;
@property(copy, nonatomic) CDUnknownBlockType loadActionBlock; // @synthesize loadActionBlock=_loadActionBlock;
@property(nonatomic) _Bool showShimmering; // @synthesize showShimmering=_showShimmering;
@property(nonatomic) _Bool hideIndicator; // @synthesize hideIndicator=_hideIndicator;
@property(nonatomic) _Bool hideMessage; // @synthesize hideMessage=_hideMessage;
@property(nonatomic) _Bool collectionViewPageEnabel; // @synthesize collectionViewPageEnabel=_collectionViewPageEnabel;
@property(nonatomic) struct UIEdgeInsets originalContentInset; // @synthesize originalContentInset=_originalContentInset;
@property(retain, nonatomic) UIActivityIndicatorView *defaultIndicator; // @synthesize defaultIndicator=_defaultIndicator;
@property(retain, nonatomic) UIImageView *loadingImageView; // @synthesize loadingImageView=_loadingImageView;
@property(retain, nonatomic) UILabel *messageLabel; // @synthesize messageLabel=_messageLabel;
@property(retain, nonatomic) NSArray *loadingImages; // @synthesize loadingImages=_loadingImages;
@property(copy, nonatomic) NSString *loadingMessage; // @synthesize loadingMessage=_loadingMessage;
@property(copy, nonatomic) NSString *pullingMessage; // @synthesize pullingMessage=_pullingMessage;
@property(copy, nonatomic) NSString *normalMessage; // @synthesize normalMessage=_normalMessage;
@property(nonatomic) unsigned long long oldRefreshStatus; // @synthesize oldRefreshStatus=_oldRefreshStatus;
@property(nonatomic) unsigned long long refreshStatus; // @synthesize refreshStatus=_refreshStatus;
@property(nonatomic) __weak UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
- (void).cxx_destruct;
- (void)keepRefreshingOffset;
- (void)resetRefreshFrame;
- (_Bool)pullToReadyRefresh;
- (void)updateContentOffsetToLoading;
- (void)updateContentOffsetToNormal;
- (void)updateRefreshContentFrame;
- (void)updateRefreshFrame;
- (void)handleContentSizeChanged;
- (void)handleContentOffsetChanged;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)addObserver;
- (void)removeObserver;
- (void)endLoading;
- (void)beginLoading;
- (void)startLoadingAction;
- (void)willMoveToSuperview:(id)arg1;

@end

