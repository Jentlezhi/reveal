//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBPhotoViewerPageViewDataSource-Protocol.h"

@class WBPhotoViewerPageView;

@protocol WBPhotoViewerPageViewDelegate <WBPhotoViewerPageViewDataSource>

@optional
- (void)photoViewerPageViewDidEndDragging:(WBPhotoViewerPageView *)arg1 willDecelerate:(_Bool)arg2;
- (void)photoViewerPageViewDidEndDecelerating:(WBPhotoViewerPageView *)arg1;
- (void)photoViewerPageViewDidScroll:(WBPhotoViewerPageView *)arg1;
- (void)photoViewerPageViewLayoutSubviews:(WBPhotoViewerPageView *)arg1;
- (void)photoViewerPageView:(WBPhotoViewerPageView *)arg1 didScrollToPageAtIndex:(long long)arg2;
@end

