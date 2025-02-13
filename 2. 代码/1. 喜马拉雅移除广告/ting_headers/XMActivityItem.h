//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSURL;

@interface XMActivityItem : NSObject
{
    _Bool isHot;
    long long activityId;
    NSString *title;
    NSURL *url;
    NSURL *coverSmall;
    NSURL *coverLarge;
    long long detailId;
    NSString *_subtitle;
    NSURL *_coverPath;
    long long _status;
}

@property(nonatomic) long long status; // @synthesize status=_status;
@property(retain, nonatomic) NSURL *coverPath; // @synthesize coverPath=_coverPath;
@property(copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(nonatomic) _Bool isHot; // @synthesize isHot;
@property(nonatomic) long long detailId; // @synthesize detailId;
@property(retain, nonatomic) NSURL *coverLarge; // @synthesize coverLarge;
@property(retain, nonatomic) NSURL *coverSmall; // @synthesize coverSmall;
@property(retain, nonatomic) NSURL *url; // @synthesize url;
@property(copy, nonatomic) NSString *title; // @synthesize title;
@property(nonatomic) long long activityId; // @synthesize activityId;
- (void).cxx_destruct;
- (id)actitvityUrl:(long long)arg1 withDetail:(long long)arg2;
- (id)configActivityUrlWithItem;
- (void)updatePropertiesFromDictionary:(id)arg1;
- (void)dealloc;

@end

