//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBSTVSBizStoryBaseCell.h"

#import "WBSTVSOverlayDelegate-Protocol.h"
#import "WBStoryMediaPlayerViewDelegate-Protocol.h"

@class NSString, WBStoryPhotoView;

@interface WBSTVSBizPhotoCell : WBSTVSBizStoryBaseCell <WBStoryMediaPlayerViewDelegate, WBSTVSOverlayDelegate>
{
    WBStoryPhotoView *_photoView;
}

@property(retain, nonatomic) WBStoryPhotoView *photoView; // @synthesize photoView=_photoView;
- (void).cxx_destruct;
- (void)storyPlayerMediaViewDidPlay:(id)arg1;
- (id)mediaView;
- (id)coverImageForTransition;
- (void)containerEndGrag;
- (void)containerBeginGrag;
- (void)containerEndScroll;
- (void)containerBeginScroll;
- (void)containerDidClose;
- (void)pageDidDisappear;
- (void)pageDidAppear;
- (void)configureWithViewModel:(id)arg1 listController:(id)arg2;
- (void)prepareForReuseWithSegment:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

