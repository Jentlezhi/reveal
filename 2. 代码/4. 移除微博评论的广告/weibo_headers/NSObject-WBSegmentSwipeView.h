//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface NSObject (WBSegmentSwipeView)
- (void)swipeView:(id)arg1 willDismissAtIndex:(long long)arg2 willVisiableAtIndex:(long long)arg3 withCheckPoint:(long long)arg4;
- (void)swipeView:(id)arg1 didSelectItemAtIndex:(long long)arg2;
- (_Bool)swipeView:(id)arg1 shouldSelectItemAtIndex:(long long)arg2;
- (void)swipeViewDidEndScrollingAnimation:(id)arg1;
- (void)swipeViewDidEndDecelerating:(id)arg1;
- (void)swipeViewWillBeginDecelerating:(id)arg1;
- (void)swipeViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)swipeViewWillBeginDragging:(id)arg1;
- (void)swipeViewCurrentItemIndexDidChange:(id)arg1;
- (void)swipeViewDidScroll:(id)arg1;
- (struct CGSize)swipeViewItemSize:(id)arg1;
@end

