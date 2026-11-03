"""Specification for GrapheneOS hardened_malloc quarantine slab configuration order 1654."""

def spec_graphene_hardened_malloc_1654() -> dict:
    return {"system": "GrapheneOS", "spec_id": 1654, "quarantine_slabs": 7, "zero_on_free": True, "canary_size": 16}

def test_spec_graphene_hardened_malloc_1654():
    s = spec_graphene_hardened_malloc_1654()
    assert s["spec_id"] == 1654
