//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XMBaseLayout.h"

@class NSURL, XMAlbumItem, XMYYLabelLayout;

@interface XMVipCGuessCellLayout : XMBaseLayout
{
    XMAlbumItem *_album;
    NSURL *_coverUrl;
    XMBaseLayout *_cover;
    XMYYLabelLayout *_title;
    XMYYLabelLayout *_playCount;
}

@property(retain, nonatomic) XMYYLabelLayout *playCount; // @synthesize playCount=_playCount;
@property(retain, nonatomic) XMYYLabelLayout *title; // @synthesize title=_title;
@property(retain, nonatomic) XMBaseLayout *cover; // @synthesize cover=_cover;
@property(retain, nonatomic) NSURL *coverUrl; // @synthesize coverUrl=_coverUrl;
@property(retain, nonatomic) XMAlbumItem *album; // @synthesize album=_album;
- (void).cxx_destruct;

@end

