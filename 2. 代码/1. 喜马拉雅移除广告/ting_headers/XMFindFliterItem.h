//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, UIImage;

@interface XMFindFliterItem : NSObject
{
    UIImage *_image;
    NSString *_title;
    long long _badgeValue;
    CDUnknownBlockType _updateBadgeValue;
}

@property(copy, nonatomic) CDUnknownBlockType updateBadgeValue; // @synthesize updateBadgeValue=_updateBadgeValue;
@property(nonatomic) long long badgeValue; // @synthesize badgeValue=_badgeValue;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
- (void).cxx_destruct;

@end

