//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 30 2018 09:30:25).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTFoundation/DVTFilterExpression.h>

#import <DVTFoundation/NSCopying-Protocol.h>
#import <DVTFoundation/NSSecureCoding-Protocol.h>

@protocol NSCopying><NSSecureCoding><NSObject;

@interface DVTCustomFilterExpression : DVTFilterExpression <NSCopying, NSSecureCoding>
{
    id <NSCopying><NSSecureCoding><NSObject> _context;
}

+ (BOOL)supportsSecureCoding;
@property(readonly) id <NSCopying><NSSecureCoding><NSObject> context; // @synthesize context=_context;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (id)initWithIdentifier:(id)arg1 context:(id)arg2 isNegation:(BOOL)arg3;
- (id)initWithIdentifier:(id)arg1 context:(id)arg2;
- (id)initWithIdentifier:(id)arg1;

@end

