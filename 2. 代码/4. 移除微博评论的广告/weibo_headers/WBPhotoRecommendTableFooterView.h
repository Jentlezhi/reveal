//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIActivityIndicatorView, UILabel;

@interface WBPhotoRecommendTableFooterView : UIView
{
    _Bool _loading;
    unsigned long long _type;
    CDUnknownBlockType _loadMoreBlock;
    CDUnknownBlockType _noNetworkGuideBlock;
    UIActivityIndicatorView *_loadingView;
    UILabel *_promptLabel;
}

@property(retain, nonatomic) UILabel *promptLabel; // @synthesize promptLabel=_promptLabel;
@property(retain, nonatomic) UIActivityIndicatorView *loadingView; // @synthesize loadingView=_loadingView;
@property(copy, nonatomic) CDUnknownBlockType noNetworkGuideBlock; // @synthesize noNetworkGuideBlock=_noNetworkGuideBlock;
@property(copy, nonatomic) CDUnknownBlockType loadMoreBlock; // @synthesize loadMoreBlock=_loadMoreBlock;
@property(nonatomic) _Bool loading; // @synthesize loading=_loading;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (void)noMoreData;
- (void)tap:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

