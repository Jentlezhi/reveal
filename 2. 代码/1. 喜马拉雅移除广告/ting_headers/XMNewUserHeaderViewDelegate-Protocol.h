//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class XMPhotoAlbumModel;

@protocol XMNewUserHeaderViewDelegate <NSObject>
- (void)onPhotoWallTap:(XMPhotoAlbumModel *)arg1 withIndex:(long long)arg2;
- (void)onEditBtn;
- (void)onHeadBtn;
- (void)onPlusTap;
- (void)onLikeLabelTap;
- (void)onFouceLabelTap;
- (void)onMailButtonClicked:(id)arg1;
- (void)onFoucusButtonClicked:(id)arg1;
@end

