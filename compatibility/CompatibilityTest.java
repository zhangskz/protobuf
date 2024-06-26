package com.google.protobuf;

import protobuf_unittest.UnittestProto.TestAllTypes;

import org.junit.Test;
import org.junit.runner.RunWith;
import org.junit.runners.JUnit4;

@RunWith(JUnit4.class)
public class CompatibilityTest {
    @Test
    public void testFoo() throws Exception {
        final TestAllTypes obj = TestAllTypes.newBuilder().setOptionalInt32(1).build();
        final byte[] serialized = obj.toByteArray();
        final TestAllTypes parsed = TestAllTypes.parseFrom(serialized);

        System.out.println(obj);
        System.out.println(parsed);
    }
}
