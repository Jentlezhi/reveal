//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface NvsLicenseExpirationChecker : NSObject
{
    _Bool _isExpired;
    NSString *_currentDate;
}

@property(retain, nonatomic) NSString *currentDate; // @synthesize currentDate=_currentDate;
@property(nonatomic) _Bool isExpired; // @synthesize isExpired=_isExpired;
- (void).cxx_destruct;
- (id)getCurrentDateString;
- (void)getLicenseInfo;
- (void)setLicenseInfo;
- (void)updateExpirationStatus;
- (_Bool)isLicenseExpired;
- (id)init;

@end

