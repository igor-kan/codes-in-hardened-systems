"""Specification for GrapheneOS hardened_malloc quarantine slab configuration order 202."""

def spec_graphene_hardened_malloc_202() -> dict:
    return {"system": "GrapheneOS", "spec_id": 202, "quarantine_slabs": 11, "zero_on_free": True, "canary_size": 16}

def test_spec_graphene_hardened_malloc_202():
    s = spec_graphene_hardened_malloc_202()
    assert s["spec_id"] == 202
