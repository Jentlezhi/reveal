//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CDZModalView.h"

@class XMAnimatedImageView, XMCommunityPicturePopInfo;

@interface XMCommunityPopPictureView : CDZModalView
{
    XMCommunityPicturePopInfo *_popInfo;
    XMAnimatedImageView *_imageView;
}

@property(retain, nonatomic) XMAnimatedImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) XMCommunityPicturePopInfo *popInfo; // @synthesize popInfo=_popInfo;
- (void).cxx_destruct;
- (id)xmubt_model;
- (void)clickImageView:(id)arg1;
- (void)willShowInView:(id)arg1;
- (void)didInitialize;

@end

