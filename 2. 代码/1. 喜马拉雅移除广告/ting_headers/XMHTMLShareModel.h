//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface XMHTMLShareModel : NSObject
{
    _Bool _isExternalUrl;
    NSString *linkCoverPath;
    NSString *linkTitle;
    NSString *linkUrl;
    NSString *linkContent;
}

+ (id)cloneItem:(id)arg1;
@property(nonatomic) _Bool isExternalUrl; // @synthesize isExternalUrl=_isExternalUrl;
@property(copy, nonatomic) NSString *linkContent; // @synthesize linkContent;
@property(copy, nonatomic) NSString *linkUrl; // @synthesize linkUrl;
@property(copy, nonatomic) NSString *linkTitle; // @synthesize linkTitle;
@property(copy, nonatomic) NSString *linkCoverPath; // @synthesize linkCoverPath;
- (void).cxx_destruct;
- (id)initWithShareLinkCoverPath:(id)arg1 linkUrl:(id)arg2 linkTitle:(id)arg3 isExternalUrl:(_Bool)arg4 linkContent:(id)arg5;
- (void)dealloc;

@end

