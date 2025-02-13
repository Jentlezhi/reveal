//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSError, NSString;

@interface XMVCDownloaderAddition : NSObject
{
    CDUnknownBlockType _progress;
    CDUnknownBlockType _completion;
    _Bool _didCompletion;
    NSString *_url;
    NSString *_path;
    NSError *_error;
}

@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(copy, nonatomic) NSString *path; // @synthesize path=_path;
@property(copy, nonatomic) NSString *url; // @synthesize url=_url;
- (void).cxx_destruct;
- (void)progress:(double)arg1;
- (void)completion;
- (void)setCompletion:(CDUnknownBlockType)arg1;
- (void)setProgress:(CDUnknownBlockType)arg1;
- (void)dealloc;

@end

